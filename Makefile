DIRS := $(wildcard */Makefile)

all: $(DIRS)
	@$(foreach d,$(DIRS),$(MAKE) -sC $(dir $(d));)
clean:
	@ echo "Cleaning all patterns"
.PHONY: clean
