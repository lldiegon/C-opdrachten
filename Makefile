.PHONY: clean All

All:
	@echo "----------Building project:[ opdracht_5_1 - Debug ]----------"
	@cd "opdracht_5_1" && "$(MAKE)" -f  "opdracht_5_1.mk"
clean:
	@echo "----------Cleaning project:[ opdracht_5_1 - Debug ]----------"
	@cd "opdracht_5_1" && "$(MAKE)" -f  "opdracht_5_1.mk" clean
