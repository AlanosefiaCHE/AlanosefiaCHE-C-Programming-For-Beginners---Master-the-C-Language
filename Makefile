.PHONY: clean All

All:
	@echo "==========Building project:[ Section7C2Challenge - Debug ]=========="
	@cd "Workspace2" && "$(MAKE)" -f  "Section7C2Challenge.mk"
clean:
	@echo "==========Cleaning project:[ Section7C2Challenge - Debug ]----------"
	@cd "Workspace2" && "$(MAKE)" -f  "Section7C2Challenge.mk" clean
