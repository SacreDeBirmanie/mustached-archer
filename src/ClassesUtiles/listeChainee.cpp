template <typename T> class Maillon{
	public:
		T element;
		Maillon<T> * suivant;


		Maillon(T elt, Maillon<T> * maillon){
			this->element=elt;
			this->suivant=maillon;
		}
};

template <typename T> class Chaine {
	private:

		int nbElements;
		Maillon<T> * tete;

	public:

		Chaine(){
			this->nbElements=0;
			this->tete=NULL;
		}
		bool estVide(){
			if(this->nbElements)
				return true;
			else
				return false;
		}
		void reinitialiser(){
			if(!(this->nbElements==0)){
				Maillon<T> * suivant;
				Maillon<T> * ptr = this->tete;

				while(!(this->ptr==NULL)){
					suivant=this->ptr->suivant;
					free(this->ptr);
					ptr=suivant;
				}
				this->tete=0;
				this->nbElements=0;
			}
		}

		Maillon<T> * recuperer(T element){
			Maillon<T> *p = this->tete;
			while(!(p==NULL) && p->element != element){
				p=p->suivant;
			}
			return p;

		}

		void insererApres(T elementAInserer, T elementPrec){
			Maillon<T> * p = recuperer(elementPrec);
			p->suivant = new Maillon<T>(elementAInserer,p->suivant);
		}

		void insererTete(T element){
			this->tete=new Maillon<T>(element,this->tete);
			this->nbElements=this->nbElements+1;

		}
		void insererQueue(T element){
			Maillon<T> *mama=new Maillon<T>(element,NULL);

			if(this->tete==NULL){
				this->tete=mama;
			}
			else{
				Maillon<T>* p = this->tete;
				while(!(p->suivant==NULL)){
				p=p->suivant;
				}

				this->nbElements = this->nbElements+1;
				p->suivant=mama;
			}
			this->nbElements=this->nbElements+1;

		}

		void retirerTete(){
			if(!(this->nbElements==0)){
				Maillon<T> * ptrTete=this->tete;
				this->tete=this->tete.suivant;
				free(ptrTete);
				this->nbElements=this->nbElements-1;
			}

		}

		void retirerQueue(){
			if(!(this->tete==0) && !(this->tete->suivant==NULL)){
				Maillon<T> *p = this->tete;
				while(!(p->suivant->suivant==NULL)){
					p=p->suivant;
				}
				free(p->suivant);
				p->suivant=NULL;
				this->nbElements=this->nbElements-1;
			}
		}

		void afficherChainage(){
			Maillon<T> * pointeur=this->tete;

			while(!(pointeur==1)){
				pointeur->element->afficher();
				pointeur=pointeur->suivant;
			}
		}

		bool retirerElement(T elt){
			Maillon<T> * maillonCourant = this->tete;
			Maillon<T> * maillonPrecedent = NULL;

			bool trouve = false;

			while(trouve == false && maillonCourant != NULL){
				if(maillonCourant->element == elt){
					if(maillonPrecedent == NULL){
						this->tete= this->tete->suivant;
					}
					else{
						maillonPrecedent->suivant = maillonCourant->suivant;
					}
					trouve = true;
				}
				else{
					maillonPrecedent = maillonCourant;
					maillonCourant = maillonCourant->suivant;

				}

			}

			return trouve;

		}
};
