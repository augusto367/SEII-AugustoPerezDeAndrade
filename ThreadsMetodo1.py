import multiprocessing
import time

inicio = time.perf_counter()

def fazer_algo(seconds):
    print('Esperando por 1 segundo')
    time.sleep(1)
    print('Feito!')

p1 = multiprocessing.process(target=fazer_algo)
p2 = multiprocessing.process(target=fazer_algo)

p1.start()
p2.start()

p1.join()
p2.join()

terminar = time.perf_counter()

print(f'Terminou em {round(terminar - inicio,2)} segundos')

