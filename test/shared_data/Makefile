test_shared_data: signal_properties.o test_signal_properties.o
	cc -o test_shared_data signal_properties.o test_signal_properties.o

signal_properties.o: ../../src/shared_data/signal_properties.c ../../src/shared_data/signal_properties.h
	cc -c ../../src/shared_data/signal_properties.c

test_signal_properties.o: test_signal_properties.c
	cc -c test_signal_properties.c

clean:
	rm signal_properties.o test_signal_properties.o test_shared_data
