import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/media/everett/94ef12fa-b831-4645-ac0d-825885cd3317/home/infrasense/install/infrasense_stop'
