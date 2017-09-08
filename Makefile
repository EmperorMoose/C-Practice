.PHONY: clean All

All:
	@echo "----------Building project:[ Example1_4 - Debug ]----------"
	@cd "Example1_4" && "$(MAKE)" -f  "Example1_4.mk"
clean:
	@echo "----------Cleaning project:[ Example1_4 - Debug ]----------"
	@cd "Example1_4" && "$(MAKE)" -f  "Example1_4.mk" clean
