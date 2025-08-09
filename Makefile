.PHONY: clean All

All:
	@echo "==========Building project:[ Section10C1Challenge - Debug ]=========="
	@cd "Section10C1Challenge" && "$(MAKE)" -f  "Section10C1Challenge.mk"
clean:
	@echo "==========Cleaning project:[ Section10C1Challenge - Debug ]----------"
	@cd "Section10C1Challenge" && "$(MAKE)" -f  "Section10C1Challenge.mk" clean
