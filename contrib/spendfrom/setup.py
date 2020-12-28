from distutils.core import setup
setup(name='btcaspendfrom',
      version='1.0',
      description='Command-line utility for bitcoinagain "coin control"',
      author='Gavin Andresen',
      author_email='gavin@bitcoinagainfoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
