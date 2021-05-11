//---------------------------------------------------------------------------

#ifndef BusH
#define BusH
class Bus {
	private:
		int number;
		String busType;
		int departureTime;
		int arrivalTime;
		String destination;
		int status; // 1 - park, 2 - way

	public:
		Bus();

		Bus(int _number, String _busType, int _departureTime, int _arrivalTime, String _destination, int _status) {
			number = _number;
			busType = _busType;
			departureTime = _departureTime;
			arrivalTime = _arrivalTime;
			destination = _destination;
			status = _status;
		}

		void Number(int value) {
			number = value;
		}

		int getNumber() {
			return number;
		}

		void BusType(String value) {
			busType = value;
		}

		String getBusType() {
			return busType;
        }


		void DepartureTime(int value) {
			departureTime = value;
		}

		int getDepartureTime() {
			return departureTime;
        }


		void ArrivalTime(int value) {
			arrivalTime = value;
		}

		int getArrivalTime() {
			return arrivalTime;
        }


		void Destination(String value) {
			destination = value;
		}

		String getDestination() {
			return destination;
        }


		void Status(int value) {
			status = value;
		}

		int getStatus() {
			return status;
        }
};
//---------------------------------------------------------------------------
#endif
