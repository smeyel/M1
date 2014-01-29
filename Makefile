all: Framework ImageProcessing M1Host Tracking

Framework:
	make -C Framework/

ImageProcessing:
	make -C ImageProcessing/

M1Host: Tracking ImageProcessing Framework
	make -C M1Host/

Tracking:
	make -C Tracking/

clean:
	make -C Framework/ clean
	make -C ImageProcessing/ clean
	make -C M1Host/ clean
	make -C Tracking/ clean

.PHONY: all Framework ImageProcessing M1Host Tracking clean
