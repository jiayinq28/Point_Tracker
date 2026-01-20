CXX = g++
CXXFLAGS = -Wall -O2
TARGET = point_tracker
OUTPUT_FILE = output.txt
SRCS = point_tracker.cpp

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(TARGET)

run: $(TARGET)
	./$(TARGET) > $(OUTPUT_FILE)
	@echo "Program output saved to $(OUTPUT_FILE)"

append_run: $(TARGET)
	./$(TARGET) >> $(OUTPUT_FILE)
	@echo "Program output appended to $(OUTPUT_FILE)"

clean:
	rm -f $(TARGET) $(OUTPUT_FILE)