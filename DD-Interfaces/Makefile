CC = gcc
CFLAGS = -Wall

all: TablasConversion Test 

TablasConversion: Conversion.o TablasDeConversion.o
	$(CC) $(CFLAGS) Conversion.o TablasDeConversion.o -o TablasConversion

Test: ConversionTest.o Conversion.o
	$(CC) $(CFLAGS) ConversionTest.o Conversion.o -o Test

clean:
	rm -f ConversionTest.o Conversion.o TablasConversion.exe Test.exe