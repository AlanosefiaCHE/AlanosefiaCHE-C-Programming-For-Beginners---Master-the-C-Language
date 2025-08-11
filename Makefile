.PHONY: clean All

All:
	@echo "==========Building project:[ Section17C3Challenge - Debug ]=========="
	@cd "Section17C3Challenge" && "$(MAKE)" -f  "Section17C3Challenge.mk"
clean:
	@echo "==========Cleaning project:[ Section17C3Challenge - Debug ]----------"
	@cd "Section17C3Challenge" && "$(MAKE)" -f  "Section17C3Challenge.mk" clean
