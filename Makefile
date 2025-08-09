.PHONY: clean All

All:
	@echo "==========Building project:[ Section8C2Challenge - Debug ]=========="
	@cd "Section8C2Challenge" && "$(MAKE)" -f  "Section8C2Challenge.mk"
clean:
	@echo "==========Cleaning project:[ Section8C2Challenge - Debug ]----------"
	@cd "Section8C2Challenge" && "$(MAKE)" -f  "Section8C2Challenge.mk" clean
