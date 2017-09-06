.PHONY: clean All

All:
	@echo "----------Building project:[ Example1_1 - Debug ]----------"
	@cd "Example1_1" && "$(MAKE)" -f  "Example1_1.mk"
clean:
	@echo "----------Cleaning project:[ Example1_1 - Debug ]----------"
	@cd "Example1_1" && "$(MAKE)" -f  "Example1_1.mk" clean
