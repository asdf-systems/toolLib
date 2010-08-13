#include <cstdio>

#ifndef ASDF_SMARTPOINTER_H
#define ASDF_SMARTPOINTER_H

namespace asdf {
	/**
	 * @brief SmartPointer is a substitute for raw pointers to help prevent
	 * memory leaks.
	 * A SmartPointer frees the contained raw pointer automatically while 
	 * destroying itself, if it is the last SmartPointer using that particular 
	 * raw pointer.
	 */
	template <class X> class SmartPointer {
		public:
			/**
			 * Creates a new SmartPointer pointing to ptr.
			 */
			SmartPointer(X *ptr = 0) {
				if(ptr) {
					container = new Container();
					container->ptr = ptr;
					container->count = 1;
				}
			}

			/**
			 * Creates a new SmartPointer pointing to the same
			 * object as ptr.
			 */
			SmartPointer(const SmartPointer<X>& ptr) {
				container = ptr.container;
				if(container)
					container->count++;
			}

			/**
			 * Frees the memory of the contained pointer if and only
			 * if this is the last SmartPointer pointing to it
			 * (i.e. getReferenceCount() == 0)
			 */
			~SmartPointer() {
				release();
			}

			/**
			 * See copy constructor.
			 * FIXME: Why do I need this to get something like this to work?
			 * 	void (SPtr<int>& a) {
			 * 		a = SPtr<int>(new int(5));
			 * 	}
			 */
			SmartPointer& operator=(SmartPointer ptr) {
				release(); // Release old container
				container = ptr.container; // Obtain new one
				if(container)
					container->count++;
				return *this;
			}

			/**
			 * See copy constructor.
			 */
			SmartPointer& operator=(SmartPointer& ptr) {
				if(&ptr != this) {
					release(); // Release old container
					container = ptr.container; // Obtain new one
					if(container)
						container->count++;
				}
				return *this;
			}

			/**
			 * Overloaded operator to make SmartPointer behave syntactically
			 * like a raw pointer.
			 */
			X& operator*() {
				return *container->ptr;
			}

			/**
			 * Overloaded operator to make SmartPointer behave syntactically
			 * like a raw pointer.
			 */
			X* operator->() {
				return container->ptr;
			}

			/**
			 * Cast operator for convenient parameter passing
			 */
			operator X*() {
				return get();
			}

			/**
			 * Gives the raw pointer. Keep use to a minimum.
			 */
			X* get() {
				if(!container)
					return NULL;
				return container->ptr;
			}

			/**
			 * Returns the current number of references to the raw pointer.
			 */
			unsigned int getReferenceCount() {
				if(!container)
					return 0;
				return container->count;
			}

		private:
			class Container {
				public:
					X *ptr;
					unsigned int count;
			} *container;

			void release() {
				if(container) {
					container->count -= 1;
					if(container->count == 0) {
						// FIXME: Replace with asdf::debugger output
						printf("Freed memory\n");
						delete container->ptr;
						delete container;
					}
					container = NULL;
				}
			}
	};
}

// FIXME: Ugly
#define SPtr SmartPointer

#endif // Headerguard
