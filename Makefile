.PHONY: clean All

All:
	@echo "==========Building project:[ Section3Challenge - Debug ]=========="
	@cd "Section3Challenge" && "$(MAKE)" -f  "Section3Challenge.mk"
clean:
	@echo "==========Cleaning project:[ Section3Challenge - Debug ]----------"
	@cd "Section3Challenge" && "$(MAKE)" -f  "Section3Challenge.mk" clean
