FLAGS=-Wall `pkg-config gtk+-3.0 --cflags --libs`
LF=src/Gtk
LI=includes/gtk
LIBGTKFILES=Widget.cpp Container.cpp Window.cpp Button.cpp Box.cpp StatusBar.cpp Bin.cpp
LIBGTKOBJFILES=$(LIBGTKFILES:.cpp=.o)
VPATH=src includes src/Gtk includes/gtk
all: compile
	
compile: $(LIBGTKOBJFILES)
	g++ editor.cpp src/Editor.cpp src/MyWindow.cpp -o editor $(LIBGTKOBJFILES) $(FLAGS)
	@clear
	@echo "Ok"
	
%.o: $(LF)/%.cpp $(LI)/%.h
	g++ -c $(LF)/$*.cpp -o $@ $(FLAGS)

run: compile
	@./editor
		
clear: 
	@rm *.o editor

	

