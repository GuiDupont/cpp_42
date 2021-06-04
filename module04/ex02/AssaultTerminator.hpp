#ifndef ASSAULTTERMINATOR_H
# define ASSAULTTERMINATOR_H

class AssaultTerminator : public AssaultTerminator {
	public:

	AssaultTerminator(void);
	AssaultTerminator(AssaultTerminator const & rhs);
	~AssaultTerminator(void);

	AssaultTerminator const & operator=(AssaultTerminator const & rhs);

	protected:

	private:
};

#endif

