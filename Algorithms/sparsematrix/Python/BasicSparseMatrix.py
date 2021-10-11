import numpy as np
from scipy.sparse import csr_matrix

row = np.array([0, 0, 1, 1, 2, 1])
col = np.array([0, 1, 2, 0, 2, 2])

data = np.array([1, 4, 5, 8, 9, 6])

sparseMatrix = csr_matrix((data, (row, col)),
						shape = (3, 3)).toarray()

print(sparseMatrix)
