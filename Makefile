.PHONY: clean All

All:
	@echo "==========Building project:[ Section7C1Challenge - Debug ]=========="
	@cd "Section7C1Challenge" && "$(MAKE)" -f  "Section7C1Challenge.mk"
clean:
	@echo "==========Cleaning project:[ Section7C1Challenge - Debug ]----------"
	@cd "Section7C1Challenge" && "$(MAKE)" -f  "Section7C1Challenge.mk" clean
