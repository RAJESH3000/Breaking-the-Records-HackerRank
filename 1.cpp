    re_match = '[A-Za-z0-9\_\-]+\@[A-Za-z0-9]+\.[A-Za-z]{0,3}$'
    return bool(re.match(re_match, s))
