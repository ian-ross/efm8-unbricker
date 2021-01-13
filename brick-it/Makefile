all: brick-it.hex

brick-it.hex: brick-it.c
	sdcc brick-it.c
	mv brick-it.ihx brick-it.hex

.PHONY: clean
clean:
	$(RM) brick-it.asm brick-it.ihx brick-it.hex brick-it.lst brick-it.mem brick-it.rst brick-it.lk brick-it.map brick-it.rel brick-it.sym
