DIRS := $(shell ls -d */)

all: $(DIRS)
	@ for dir in $^; do $(MAKE) -sC $$dir; done
clean:
	@ echo "Cleaning all patterns"
.PHONY: clean
