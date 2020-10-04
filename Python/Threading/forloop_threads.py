import threading
import time

start = time.perf_counter()

def do_something(second):
    print(f"sleeping for {second} second..")
    time.sleep(second)
    print('Done sleeping')

threads=[]


for _ in range(100):
    t=threading.Thread(target=do_something,args=[1])
    t.start()
    threads.append(t)

for thread in threads:
    thread.join()

finish=time.perf_counter()

print(f'Finished in {round(finish-start,3)} seconds')