#ifndef ASDF_SMARTPOINTER_H
#define ASDF_SMARTPOINTER_H

#include <cstdio>

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
					mContainer = new Container();
					mContainer->ptr = ptr;
					mContainer->count = 1;
				} else
					mContainer = NULL;
			}

			/**
			 * Creates a new SmartPointer pointing to the same
			 * object as ptr.
			 */
			SmartPointer(const SmartPointer<X>& ptr) {
				mContainer = ptr.mContainer;
				if(mContainer)
					mContainer->count++;
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
			 */
			SmartPointer<X>& operator=(const SmartPointer<X>& ptr) {
				if(&ptr != this) {
					release(); // Release old container
					mContainer = ptr.mContainer; // Obtain new one
					if(mContainer)
						mContainer->count++;
				}
				return *this;
			}

			/**
			 * Overloaded operator to make SmartPointer behave syntactically
			 * like a raw pointer.
			 */
			X& operator*() {
				return *mContainer->ptr;
			}

			/**
			 * Overloaded operator to make SmartPointer behave syntactically
			 * like a raw pointer.
			 */
			X* operator->() {
				return mContainer->ptr;
			}

			/**
			 * Array index operator for convenient array handling
			 */
			X& operator[](int cnt) {
				return mContainer->ptr[cnt];
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
				if(!mContainer)
					return NULL;
				return mContainer->ptr;
			}

			/**
			 * Returns the current number of references to the raw pointer.
			 */
			unsigned int getReferenceCount() {
				if(!mContainer)
					return 0;
				return mContainer->count;
			}

		private:
			// Nested classes ain't pretty, but otherwise template
			// X would be unaccessible.
			class Container {
				public:
					X *ptr;
					unsigned int count;
			} *mContainer;

			void release() {
				if(mContainer) {
					mContainer->count -= 1;
					if(mContainer->count == 0) {
						// FIXME: Replace with asdf::debugger output
						printf("Freed memory\n");
						delete mContainer->ptr;
						delete mContainer;
					}
					mContainer = NULL;
				}
			}
	};
}

// FIXME: Ugly
#define SPtr SmartPointer


#endif // Headerguard

// Prototype
namespace asdf{
	template <class X> class SmartPointer;
}
