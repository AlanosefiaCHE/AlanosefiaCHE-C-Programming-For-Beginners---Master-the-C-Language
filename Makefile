.PHONY: clean All

All:
	@echo "==========Building project:[ Section3Challenge - Debug ]=========="
	@cd "Challenge" && "$(MAKE)" -f  "Section3Challenge.mk"
clean:
	@echo "==========Cleaning project:[ Section3Challenge - Debug ]----------"
	@cd "Challenge" && "$(MAKE)" -f  "Section3Challenge.mk" clean
