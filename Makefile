.PHONY: clean All

All:
	@echo "==========Building project:[ Section4C2Challenge - Debug ]=========="
	@cd "Section4C2Challenge" && "$(MAKE)" -f  "Section4C2Challenge.mk"
clean:
	@echo "==========Cleaning project:[ Section4C2Challenge - Debug ]----------"
	@cd "Section4C2Challenge" && "$(MAKE)" -f  "Section4C2Challenge.mk" clean
