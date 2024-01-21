CXX=g++
OPT=-g -Wall -Wextra -std=c++17 -O2
CXXLIBS += -lfltk -lfltk_images 

score_dir := assets/score/
score_file := assets/score/score.json
include_file := Include.hpp

MODELS = $(shell find Model -name '*.cpp')
VIEWS = $(shell find View -name '*.cpp') 
CONTROLLERS = $(wildcard Controller/*.cpp)
REP_BIN = bin
MODELS_O = $(patsubst Model/%.cpp,bin/%.o,$(MODELS))
VIEWS_O = $(patsubst View/%.cpp,bin/%.o,$(VIEWS))
CONTROLLERS_O = $(patsubst Controller/%.cpp,bin/%.o,$(CONTROLLERS))

make : $(MODELS_O) $(VIEWS_O) $(CONTROLLERS_O)
	$(CXX) main.cpp $(VIEWS_O) $(CONTROLLERS_O) $(MODELS_O) -o frogger $(CXXLIBS)

$(MODELS_O) : bin/%.o : Model/%.cpp $(include_file)
	mkdir -p $(dir $@) 
	$(CXX) -c $< -o $@ $(CXXLIBS)

$(VIEWS_O) : bin/%.o : View/%.cpp $(include_file)
	mkdir -p $(dir $@)
	$(CXX) -c $< -o $@ $(CXXLIBS)

$(CONTROLLERS_O) : bin/%.o : Controller/%.cpp $(include_file)
	mkdir -p $(dir $@)  
	$(CXX) -c $< -o $@ $(CXXLIBS)

clean:
	rm -f bin/*/*.o bin/*.o frogger 