output: main.o createRectArray.o createCubeArray.o createCylinderArray.o createSphereArray.o createSqrArray.o
	g++ main.o createRectArray.o createCubeArray.o createCylinderArray.o createSphereArray.o createSqrArray.o -o output

main.o: main.cpp
	g++ -c main.cpp

createRectArray.o: createRectArray.cpp mainheader.h
	g++ -c createRectArray.cpp

createCubeArray.o: createCubeArray.cpp mainheader.h
	g++ -c createCubeArray.cpp

createCylinderArray.o: createCylinderArray.cpp mainheader.h createCylinderArray.h
	g++ -c createCylinderArray.cpp

createSphereArray.o: createSphereArray.cpp mainheader.h createSphereArray.h
	g++ -c createSphereArray.cpp

createSqrArray.o: createSqrArray.cpp mainheader.h
	g++ -c createSqrArray.cpp

clean:
	rm *.o output
