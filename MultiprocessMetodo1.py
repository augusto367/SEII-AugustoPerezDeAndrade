import concurrent.futures
import time

inicio = time.perf_counter()

def fazer_algo(seconds):
    print('Esperando por 1 segundo')
    time.sleep(1)
    print('Feito!')

with concurrent.futures.ProcessPoolExecutor() as executavel:
    resultados = [executavel.submit(fazer_algo,1) for _ in range(10)]

    for f in concurrent.futures.as_completed():
        print(f.resultados())

terminar = time.perf_counter()

print(f'Terminou em {round(terminar - inicio,2)} segundos')

