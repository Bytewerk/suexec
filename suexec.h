#ifndef _SUEXEC_H
#define _SUEXEC_H

#define AP_HTTPD_USER "www-data"
#define AP_UID_MIN 1000
#define AP_GID_MIN 1000
#define AP_USERDIR_SUFFIX "public_html"
#define AP_LOG_EXEC "/var/log/apache2/suexec.log"
#define AP_DOC_ROOT "/home"
#define AP_SAFE_PATH "/usr/local/bin:/usr/bin:/bin"

#endif /* _SUEXEC_H */
