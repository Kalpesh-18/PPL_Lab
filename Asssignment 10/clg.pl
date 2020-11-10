teaches_subject(jatin_majithia,odemvc).
teaches_subject(dattatray_ghaytadak,odemvc).
teaches_subject(shrida_kalamkar,dsa-1).
teaches_subject(ashmini_matange,dsa-1).
teaches_subject(vaibhav_khatavkar,ppl).
teaches_subject(sumit_hirve,ppl).
teaches_subject(jagannath_aghav,dtl).
teaches_subject(pravin_patil,dld).
teaches_subject(shalaka_deshpande,plevh).
teaches_subject(kshipra_moghe,plevh).
teaches_subject(manoj_soman,ic).
teaches_subject(prakash_apte,ic).
teaches_subject(sandeep_hanwate,fcs).
 
has_subject(comp_dept,odemvc).
has_subject(comp_dept,dsa-1).
has_subject(comp_dept,ppl).
has_subject(comp_dept,dtl).
has_subject(comp_dept,dld).
has_subject(comp_dept,plevh).
has_subject(comp_dept,ic).
has_subject(comp_dept,fcs).
 
has_student(comp_dept,kalpesh_ahire).
has_student(comp_dept,harish_choudhary).
has_student(comp_dept,kunal).
has_student(comp_dept,kunal_more).
has_student(comp_dept,mudit_bapna).
has_student(comp_dept,kunal_dhake).
has_student(comp_dept,piyush_hule).
has_student(comp_dept,sagar_sonawane).
has_student(comp_dept,mahesh_tone).
has_student(comp_dept,abhishek_gaikwad).

has_faculty(DEPARTMENT,FACULTY) :- teaches_subject(FACULTY,SUBJECT) , has_subject(DEPARTMENT,SUBJECT).
studies_subject(STUDENT,SUBJECT) :- has_student(DEPARTMENT,STUDENT) , has_subject(DEPARTMENT,SUBJECT).
studies_under(STUDENT,FACULTY) :- has_subject(DEPARTMENT,SUBJECT) , has_student(DEPARTMENT,STUDENT) , teaches_subject(FACULTY,SUBJECT).
