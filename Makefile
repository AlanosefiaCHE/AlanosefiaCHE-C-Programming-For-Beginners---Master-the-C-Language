.PHONY: clean All

All:
	@echo "==========Building project:[ Section5C1Challenge - Debug ]=========="
	@cd "Section5C1Challenge" && "$(MAKE)" -f  "Section5C1Challenge.mk"
clean:
	@echo "==========Cleaning project:[ Section5C1Challenge - Debug ]----------"
	@cd "Section5C1Challenge" && "$(MAKE)" -f  "Section5C1Challenge.mk" clean
