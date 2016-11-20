;;; package --- Sumary
;;; Commentary:
;; Added by Package.el.  This must come before configurations of
;; installed packages.  Don't delete this line.  If you don't want it,
;; just comment it out by adding a semicolon to the start of the line.
;; You may delete these explanatory comments.
;;; Code:
(package-initialize)

(put 'set-goal-column 'disabled nil)

(global-set-key (kbd "C-x <up>") 'windmove-up)
(global-set-key (kbd "C-x <down>") 'windmove-down)
(global-set-key (kbd "C-x <left>") 'windmove-left)
(global-set-key (kbd "C-x <right>") 'windmove-right)

(setq-default c-basic-offset 4 tab-width 4 indent-tabs-mode t)

(global-linum-mode t)

;; Any add to list for package-archives (to add marmalade or melpa) goes here

(setq package-archives '(("gnu" . "http://elpa.gnu.org/packages/")
                         ("marmalade" . "http://marmalade-repo.org/packages/")
("melpa" . "http://melpa.milkbox.net/packages/")))

(custom-set-variables
 ;; custom-set-variables was added by Custom.
 ;; If you edit it by hand, you could mess it up, so be careful.
 ;; Your init file should contain only one such instance.
 ;; If there is more than one, they won't work right.
 '(column-number-mode t)
 '(custom-enabled-themes (quote (base16-google-dark)))
 '(custom-safe-themes
   (quote
	("6145e62774a589c074a31a05dfa5efdf8789cf869104e905956f0cbd7eda9d0e" "542e6fee85eea8e47243a5647358c344111aa9c04510394720a3108803c8ddd1" "aea30125ef2e48831f46695418677b9d676c3babf43959c8e978c0ad672a7329" default)))
 '(package-selected-packages (quote (flycheck ac-c-headers base16-theme minimap)))
 '(tool-bar-mode nil))

(custom-set-faces
 ;; custom-set-faces was added by Custom.
 ;; If you edit it by hand, you could mess it up, so be careful.
 ;; Your init file should contain only one such instance.
 ;; If there is more than one, they won't work right.
 '(default ((t (:family "DejaVu Sans Mono" :foundry "PfEd" :slant normal :weight normal :height 83 :width normal)))))

;; set theme
;; (load-theme 'spolsky)
;; (load-theme 'lush)
;; (load-theme 'cyberpunk)
;; (load-theme 'spolsky)
;; (load-theme 'base16-default-dark)
;; (load-theme 'base16-railscasts-dark)
;; (load-theme 'base16-pop)
;; (load-theme 'base16-apathy)
;; (load-theme 'base16-google-dark)
(load-theme 'base16-onedark)
;; (load-theme 'base16-atelier-savanna)

;; set windows title to file name
(setq frame-title-format '("Emacs @ " system-name ": %b %+%+ %f"))

;; remove menu bar
(menu-bar-mode -1)

;; remove tool bar
(tool-bar-mode -1)

;; remove scrool bar
(toggle-scroll-bar -1)

;; auto complete
(global-auto-complete-mode t)

;; show bracket and parenthesis matching
(show-paren-mode 1)

;; flycheck
(global-flycheck-mode t)

;; Emacs transparency
;; (set-frame-parameter (selected-frame) 'alpha '(92 92))
;; (add-to-list 'default-frame-alist '(alpha 92 92))

;;; .emacs ends here
