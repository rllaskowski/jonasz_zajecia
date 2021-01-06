## Sortowanie list w Python

Aby sortować listę możemy skorzystać z dwóch wbudowanych funkcji:

### `list.sort()`

```
lista = [1, 5, 2, 12, 10]

# Modyfikuje listę, sortując ją w kolejności rosnącej
lista.sort()

# Wypisze [1, 2, 5, 10, 12]
print(lista)
```

### `sorted(list)`

```
lista = [1, 5, 2, 12, 10]

# Tworzy posortowaną KOPIĘ listy. Stara lista nie ulega zmianie!
posortowanaLista = sorted(lista)

# Wypisze [1, 5, 2, 12, 10]
print(lista)

# Wypisze [1, 2, 5, 10, 12]
print(posortowanaLista)
```

