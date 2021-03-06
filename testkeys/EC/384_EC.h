/**
 *	@file    384_EC.h
 *	@version $Format:%h%d$
 *
 *	Auto generated from PEM file.
 */
/*
	Auto generated X.509 certificate as binary DER.
Certificate:
    Data:
        Version: 3
        Serial Number:
            23:8c
        Issuer: CN=MatrixSSL Sample CA (Elliptic curve secp384r1), C=US, ST=WA, L=Seattle, O=Inside Secure Corporation, OU=Test
        Validity:
            Not Before: 2014/03/13
            Not After : 2017/03/12
        Subject: CN=MatrixSSL Sample Cert (Elliptic curve secp384r1), C=US, ST=WA, L=Seattle, O=Inside Secure Corporation, OU=Test
        Subject Public Key Info:
            Public Key Algorithm: id-ecPublicKey
                Public-Key: (384 bit)
                pub:
                    4b:01:73:c0:92:b5:50:aa:7f:00:21:de:6e:70:1b:97:
                    70:71:fc:94:93:7b:5f:09:78:57:6b:43:55:43:19:21:
                    10:92:79:57:cb:44:29:50:df:c9:72:04:da:c0:43:37
                    e5:cd:08:6c:98:ed:fb:95:71:f8:a5:88:b7:12:27:51:
                    b8:10:7b:14:fd:29:23:e8:45:10:3f:81:84:f8:f6:a7:
                    c8:2a:6b:a8:2f:8b:9e:29:6e:fc:15:f1:23:e5:23:4b
                ASN1 OID: secp384r1
        X509v3 extensions:
            X509v3 Subject Alternative Name: DNS
                localhost
            X509v3 Subject Alternative Name: iPAddress
                127.0.0.1
            X509v3 Basic Constraints:
                CA:FALSE
            X509v3 Key Usage: 0x0
            X509v3 Extended Key Usage: 0x6
                TLS WWW server authentication
                TLS WWW client authentication
            X509v3 Subject Key Identifier:
                a3:37:0f:e5:90:82:27:a3:9e:a4:99:09:8b:e8:6e:5a:
                11:94:ad:b1
            X509v3 Authority Key Identifier:
                44:ed:fc:8b:17:42:6e:61:f6:35:93:3d:3f:81:97:6f:
                67:68:5a:1b
    Signature Algorithm: ecdsa-with-SHA384
        30:64:02:30:6e:b2:3a:3d:ee:20:f3:67:ff:53:b8:e5:
        1e:77:7b:c8:02:c8:05:83:34:60:d6:70:04:31:1a:fc:
        32:e1:ec:8c:1a:a1:dd:97:09:cc:e7:5d:42:22:77:a9:
        9d:b3:70:a1:02:30:07:36:1d:2c:b7:19:1c:51:ca:40:
        8c:a5:ec:45:fd:85:3f:14:e6:b8:eb:cd:d3:fd:5f:10:
        80:62:a6:a8:ae:f6:c3:e9:0c:ca:da:3c:88:c3:82:b1:
        7f:58:5b:7a:25:19
*/
#define EC384_SIZE	750
const static unsigned char EC384[EC384_SIZE] =
	"\x30\x82\x02\xea\x30\x82\x02\x71\xa0\x03\x02\x01\x02\x02\x02\x23"
	"\x8c\x30\x0a\x06\x08\x2a\x86\x48\xce\x3d\x04\x03\x03\x30\x81\x98"
	"\x31\x0b\x30\x09\x06\x03\x55\x04\x06\x13\x02\x55\x53\x31\x0b\x30"
	"\x09\x06\x03\x55\x04\x08\x0c\x02\x57\x41\x31\x10\x30\x0e\x06\x03"
	"\x55\x04\x07\x0c\x07\x53\x65\x61\x74\x74\x6c\x65\x31\x22\x30\x20"
	"\x06\x03\x55\x04\x0a\x0c\x19\x49\x6e\x73\x69\x64\x65\x20\x53\x65"
	"\x63\x75\x72\x65\x20\x43\x6f\x72\x70\x6f\x72\x61\x74\x69\x6f\x6e"
	"\x31\x0d\x30\x0b\x06\x03\x55\x04\x0b\x0c\x04\x54\x65\x73\x74\x31"
	"\x37\x30\x35\x06\x03\x55\x04\x03\x0c\x2e\x4d\x61\x74\x72\x69\x78"
	"\x53\x53\x4c\x20\x53\x61\x6d\x70\x6c\x65\x20\x43\x41\x20\x28\x45"
	"\x6c\x6c\x69\x70\x74\x69\x63\x20\x63\x75\x72\x76\x65\x20\x73\x65"
	"\x63\x70\x33\x38\x34\x72\x31\x29\x30\x1e\x17\x0d\x31\x34\x30\x33"
	"\x31\x33\x32\x33\x32\x31\x32\x37\x5a\x17\x0d\x31\x37\x30\x33\x31"
	"\x32\x32\x33\x32\x31\x32\x37\x5a\x30\x81\x9a\x31\x0b\x30\x09\x06"
	"\x03\x55\x04\x06\x13\x02\x55\x53\x31\x0b\x30\x09\x06\x03\x55\x04"
	"\x08\x0c\x02\x57\x41\x31\x10\x30\x0e\x06\x03\x55\x04\x07\x0c\x07"
	"\x53\x65\x61\x74\x74\x6c\x65\x31\x22\x30\x20\x06\x03\x55\x04\x0a"
	"\x0c\x19\x49\x6e\x73\x69\x64\x65\x20\x53\x65\x63\x75\x72\x65\x20"
	"\x43\x6f\x72\x70\x6f\x72\x61\x74\x69\x6f\x6e\x31\x0d\x30\x0b\x06"
	"\x03\x55\x04\x0b\x0c\x04\x54\x65\x73\x74\x31\x39\x30\x37\x06\x03"
	"\x55\x04\x03\x0c\x30\x4d\x61\x74\x72\x69\x78\x53\x53\x4c\x20\x53"
	"\x61\x6d\x70\x6c\x65\x20\x43\x65\x72\x74\x20\x28\x45\x6c\x6c\x69"
	"\x70\x74\x69\x63\x20\x63\x75\x72\x76\x65\x20\x73\x65\x63\x70\x33"
	"\x38\x34\x72\x31\x29\x30\x76\x30\x10\x06\x07\x2a\x86\x48\xce\x3d"
	"\x02\x01\x06\x05\x2b\x81\x04\x00\x22\x03\x62\x00\x04\x4b\x01\x73"
	"\xc0\x92\xb5\x50\xaa\x7f\x00\x21\xde\x6e\x70\x1b\x97\x70\x71\xfc"
	"\x94\x93\x7b\x5f\x09\x78\x57\x6b\x43\x55\x43\x19\x21\x10\x92\x79"
	"\x57\xcb\x44\x29\x50\xdf\xc9\x72\x04\xda\xc0\x43\x37\xe5\xcd\x08"
	"\x6c\x98\xed\xfb\x95\x71\xf8\xa5\x88\xb7\x12\x27\x51\xb8\x10\x7b"
	"\x14\xfd\x29\x23\xe8\x45\x10\x3f\x81\x84\xf8\xf6\xa7\xc8\x2a\x6b"
	"\xa8\x2f\x8b\x9e\x29\x6e\xfc\x15\xf1\x23\xe5\x23\x4b\xa3\x81\x89"
	"\x30\x81\x86\x30\x09\x06\x03\x55\x1d\x13\x04\x02\x30\x00\x30\x1d"
	"\x06\x03\x55\x1d\x0e\x04\x16\x04\x14\xa3\x37\x0f\xe5\x90\x82\x27"
	"\xa3\x9e\xa4\x99\x09\x8b\xe8\x6e\x5a\x11\x94\xad\xb1\x30\x1f\x06"
	"\x03\x55\x1d\x23\x04\x18\x30\x16\x80\x14\x44\xed\xfc\x8b\x17\x42"
	"\x6e\x61\xf6\x35\x93\x3d\x3f\x81\x97\x6f\x67\x68\x5a\x1b\x30\x1d"
	"\x06\x03\x55\x1d\x25\x04\x16\x30\x14\x06\x08\x2b\x06\x01\x05\x05"
	"\x07\x03\x01\x06\x08\x2b\x06\x01\x05\x05\x07\x03\x02\x30\x1a\x06"
	"\x03\x55\x1d\x11\x04\x13\x30\x11\x82\x09\x6c\x6f\x63\x61\x6c\x68"
	"\x6f\x73\x74\x87\x04\x7f\x00\x00\x01\x30\x0a\x06\x08\x2a\x86\x48"
	"\xce\x3d\x04\x03\x03\x03\x67\x00\x30\x64\x02\x30\x6e\xb2\x3a\x3d"
	"\xee\x20\xf3\x67\xff\x53\xb8\xe5\x1e\x77\x7b\xc8\x02\xc8\x05\x83"
	"\x34\x60\xd6\x70\x04\x31\x1a\xfc\x32\xe1\xec\x8c\x1a\xa1\xdd\x97"
	"\x09\xcc\xe7\x5d\x42\x22\x77\xa9\x9d\xb3\x70\xa1\x02\x30\x07\x36"
	"\x1d\x2c\xb7\x19\x1c\x51\xca\x40\x8c\xa5\xec\x45\xfd\x85\x3f\x14"
	"\xe6\xb8\xeb\xcd\xd3\xfd\x5f\x10\x80\x62\xa6\xa8\xae\xf6\xc3\xe9"
	"\x0c\xca\xda\x3c\x88\xc3\x82\xb1\x7f\x58\x5b\x7a\x25\x19";
