#ifndef WXS_SETUP_ONLY
extern Scheme_Object *objscheme_bundle_wxObject(class wxObject *);
extern class wxObject *objscheme_unbundle_wxObject(Scheme_Object *, const char *, int);
#endif
void objscheme_setup_wxEvent(void *env);
#ifndef WXS_SETUP_ONLY
int objscheme_istype_wxEvent(Scheme_Object *obj, const char *stop, int nullOK);
Scheme_Object *objscheme_bundle_wxEvent(class wxEvent *realobj);
class wxEvent *objscheme_unbundle_wxEvent(Scheme_Object *obj, const char *where, int nullOK);
#endif
void objscheme_setup_wxCommandEvent(void *env);
#ifndef WXS_SETUP_ONLY
int objscheme_istype_wxCommandEvent(Scheme_Object *obj, const char *stop, int nullOK);
Scheme_Object *objscheme_bundle_wxCommandEvent(class wxCommandEvent *realobj);
class wxCommandEvent *objscheme_unbundle_wxCommandEvent(Scheme_Object *obj, const char *where, int nullOK);
#endif
void objscheme_setup_wxKeyEvent(void *env);
#ifndef WXS_SETUP_ONLY
int objscheme_istype_wxKeyEvent(Scheme_Object *obj, const char *stop, int nullOK);
Scheme_Object *objscheme_bundle_wxKeyEvent(class wxKeyEvent *realobj);
class wxKeyEvent *objscheme_unbundle_wxKeyEvent(Scheme_Object *obj, const char *where, int nullOK);
#endif
void objscheme_setup_wxMouseEvent(void *env);
#ifndef WXS_SETUP_ONLY
int objscheme_istype_wxMouseEvent(Scheme_Object *obj, const char *stop, int nullOK);
Scheme_Object *objscheme_bundle_wxMouseEvent(class wxMouseEvent *realobj);
class wxMouseEvent *objscheme_unbundle_wxMouseEvent(Scheme_Object *obj, const char *where, int nullOK);
#endif
