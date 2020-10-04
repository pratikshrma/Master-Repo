import concurrent.futures
import time

start = time.perf_counter()

def do_something(second):
    print(f"sleeping for {second} second..")
    time.sleep(second)
    return 'Done sleeping'

with concurrent.futures.ThreadPoolExecutor() as executor:
    f1=executor.submit(do_something,1)
    f2=executor.submit(do_something,1)
    
    print(f1.result())
    print(f2.result())

# threads=[]


# for _ in range(10):
#     t=threading.Thread(target=do_something,args=[1.5])
#     t.start()
#     threads.append(t)

# for thread in threads:
#     thread.join()

finish=time.perf_counter()

print(f'Finished in {round(finish-start,3)} seconds')