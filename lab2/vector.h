//---------------------------------------------------------------------------

#ifndef vectorH
#define vectorH
//---------------------------------------------------------------------------

template <class T>
class vector {
	private:
		int length, picked;
		T *data;

	public:
		vector() : length(0), data(nullptr) {}

		vector(int l) {
			data = new T[l];
			length = l;
		}

		~vector() {
			delete[] data;
		}

		void erase() {
			delete[] data;

			data = nullptr;
			length = 0;
		}

		T& operator[](int index) {
			assert(index >= 0 && index < length);
			return data[index];
		}

			void remove(int index) {
			assert(index >= 0 && index < length);

			if (length == 1) {
				erase();
				return;
			}

			T *arr = new T[length - 1];

			for(int i = 0; i < index; i++) {
				arr[i] = data[i];
			}

			for(int i = index + 1; i < index; i++) {
				arr[i - 1] = data[i];
			}

			delete[] data;
			data = arr;
			length--;
		}

		int getlength();
		/*
		void reallocate(int new_length) {
			erase();

			if(new_length <= 0) {
				return;
			}

			data = new T[new_length];
			length = new_length;
		}

		void resize(int new_length) {
			if(new_length == length) {
				return;
			}

			if(new_length <= 0) {
				erase();
				return;
			}

			T *arr = new T[new_length];

			if(length > 0) {
				int max_length;

				if (length > new_length) {
					max_length = length;
				}

				else max_length = new_length;

				for(int i = 0; i < max_length; i++) {
					arr[i] = data[i];
                }
			}

			delete[] data;

			data = arr;
			length = new_length;
		}   */

		void add(T value, int index) {
		assert(index >= 0 && index <= length);

		T *arr = new T[length + 1];

		for (int i = 0; i < index; i++)
			arr[i] = data[i];

		arr [index] = value;

		for (int i = index; i < length; i++)
			arr[i + 1] = data[i];

		delete[] data;
		data = arr;
		length++;
	}
};


template <typename T>

int vector<T>::getlength() {
	return length;
}

#endif
