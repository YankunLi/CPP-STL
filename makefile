cc=g++
#LDFLAGS +=  -lpthread -ls3
exe=main
obj=stl_string.o
resource=stl_string.cpp
$(exe):$(obj)
	$(cc) -o $(exe) $(obj) $(LDFLAGS)
$(obj):$(resource)
	$(cc) -c $(resource)
clean:
	rm -rf *.o main
