# RSA Security
- RSA(Rivest-Shamir-Adleman) is a public-key cryptosystem, used for secure data transmission.
- In a public-key cryptosystem, the encryption key is public and distinct from the decryption 
key, which is kept secret (private).
- An RSA user creates and publishes a public key based on two large prime numbers, along
with an auxilliary value.
- The prime numbers are kept secret. Messages can be encrypted by anyone, via the public key,
but can only be decrypted by someone who knows the private key.
- The security of RSA relies on the practical difficulty of factoring the product  of two large
prime numbers, the "factoring problem"?
- RSA is relatively a slow algorithm. Because of this, it is not commonly used to directly encrypt
user data. More often, RSA is used to transmit shared keys for symmetric-key cryptography, which
are then used for bulk encryption-decryption.
- It is also used as a digital signature, to encrypt a message which may be decrypted by anyone,
but which can only be encrypted by one person, this provides a digital signature.  
