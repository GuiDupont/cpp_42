#ifndef SQUAD_H
# define SQUAD_H

class Squad : public Squad {
	public:

	Squad(void);
	Squad(Squad const & rhs);
	~Squad(void);

	Squad const & operator=(Squad const & rhs);

	protected:

	private:
};

#endif

