import concurrent.futures
import time

inicio = time.perf_counter()

def fazer_algo(seconds):
    print(f'Esperando por {seconds} segundo')
    time.sleep(1)
    return f'Feito!'

with concurrent.futures.ThreadPoolExecutor() as executavel:
    secs = [5,4,3,2,1]
    resultados = [executavel.submit(fazer_algo,sec) for sec in secs]

    for f in concurrent.futures.as_completed(resultados):
        print(f.resultados())

terminar = time.perf_counter()

print(f'Terminou em {round(terminar - inicio,2)} segundos')

