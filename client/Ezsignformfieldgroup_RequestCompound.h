/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Ezsignformfieldgroup_RequestCompound.h
 *
 * An Ezsignformfieldgroup Object and children to create a complete structure
 */

#ifndef Ezsignformfieldgroup_RequestCompound_H
#define Ezsignformfieldgroup_RequestCompound_H

#include <QJsonObject>

#include "Custom_DropdownElement_RequestCompound.h"
#include "Enum_Textvalidation.h"
#include "Ezsignformfield_RequestCompound.h"
#include "Ezsignformfieldgroupsigner_RequestCompound.h"
#include "Field_eEzsignformfieldgroupSignerrequirement.h"
#include "Field_eEzsignformfieldgroupTooltipposition.h"
#include "Field_eEzsignformfieldgroupType.h"
#include <QList>
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Ezsignformfieldgroupsigner_RequestCompound;
class Custom_DropdownElement_RequestCompound;
class Ezsignformfield_RequestCompound;

class Ezsignformfieldgroup_RequestCompound : public Object {
public:
    Ezsignformfieldgroup_RequestCompound();
    Ezsignformfieldgroup_RequestCompound(QString json);
    ~Ezsignformfieldgroup_RequestCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsignformfieldgroupId() const;
    void setPkiEzsignformfieldgroupId(const qint32 &pki_ezsignformfieldgroup_id);
    bool is_pki_ezsignformfieldgroup_id_Set() const;
    bool is_pki_ezsignformfieldgroup_id_Valid() const;

    qint32 getFkiEzsigndocumentId() const;
    void setFkiEzsigndocumentId(const qint32 &fki_ezsigndocument_id);
    bool is_fki_ezsigndocument_id_Set() const;
    bool is_fki_ezsigndocument_id_Valid() const;

    Field_eEzsignformfieldgroupType getEEzsignformfieldgroupType() const;
    void setEEzsignformfieldgroupType(const Field_eEzsignformfieldgroupType &e_ezsignformfieldgroup_type);
    bool is_e_ezsignformfieldgroup_type_Set() const;
    bool is_e_ezsignformfieldgroup_type_Valid() const;

    Q_DECL_DEPRECATED Field_eEzsignformfieldgroupSignerrequirement getEEzsignformfieldgroupSignerrequirement() const;
    Q_DECL_DEPRECATED void setEEzsignformfieldgroupSignerrequirement(const Field_eEzsignformfieldgroupSignerrequirement &e_ezsignformfieldgroup_signerrequirement);
    Q_DECL_DEPRECATED bool is_e_ezsignformfieldgroup_signerrequirement_Set() const;
    Q_DECL_DEPRECATED bool is_e_ezsignformfieldgroup_signerrequirement_Valid() const;

    QString getSEzsignformfieldgroupLabel() const;
    void setSEzsignformfieldgroupLabel(const QString &s_ezsignformfieldgroup_label);
    bool is_s_ezsignformfieldgroup_label_Set() const;
    bool is_s_ezsignformfieldgroup_label_Valid() const;

    qint32 getIEzsignformfieldgroupStep() const;
    void setIEzsignformfieldgroupStep(const qint32 &i_ezsignformfieldgroup_step);
    bool is_i_ezsignformfieldgroup_step_Set() const;
    bool is_i_ezsignformfieldgroup_step_Valid() const;

    QString getSEzsignformfieldgroupDefaultvalue() const;
    void setSEzsignformfieldgroupDefaultvalue(const QString &s_ezsignformfieldgroup_defaultvalue);
    bool is_s_ezsignformfieldgroup_defaultvalue_Set() const;
    bool is_s_ezsignformfieldgroup_defaultvalue_Valid() const;

    qint32 getIEzsignformfieldgroupFilledmin() const;
    void setIEzsignformfieldgroupFilledmin(const qint32 &i_ezsignformfieldgroup_filledmin);
    bool is_i_ezsignformfieldgroup_filledmin_Set() const;
    bool is_i_ezsignformfieldgroup_filledmin_Valid() const;

    qint32 getIEzsignformfieldgroupFilledmax() const;
    void setIEzsignformfieldgroupFilledmax(const qint32 &i_ezsignformfieldgroup_filledmax);
    bool is_i_ezsignformfieldgroup_filledmax_Set() const;
    bool is_i_ezsignformfieldgroup_filledmax_Valid() const;

    bool isBEzsignformfieldgroupReadonly() const;
    void setBEzsignformfieldgroupReadonly(const bool &b_ezsignformfieldgroup_readonly);
    bool is_b_ezsignformfieldgroup_readonly_Set() const;
    bool is_b_ezsignformfieldgroup_readonly_Valid() const;

    qint32 getIEzsignformfieldgroupMaxlength() const;
    void setIEzsignformfieldgroupMaxlength(const qint32 &i_ezsignformfieldgroup_maxlength);
    bool is_i_ezsignformfieldgroup_maxlength_Set() const;
    bool is_i_ezsignformfieldgroup_maxlength_Valid() const;

    bool isBEzsignformfieldgroupEncrypted() const;
    void setBEzsignformfieldgroupEncrypted(const bool &b_ezsignformfieldgroup_encrypted);
    bool is_b_ezsignformfieldgroup_encrypted_Set() const;
    bool is_b_ezsignformfieldgroup_encrypted_Valid() const;

    QString getSEzsignformfieldgroupRegexp() const;
    void setSEzsignformfieldgroupRegexp(const QString &s_ezsignformfieldgroup_regexp);
    bool is_s_ezsignformfieldgroup_regexp_Set() const;
    bool is_s_ezsignformfieldgroup_regexp_Valid() const;

    QString getTEzsignformfieldgroupTooltip() const;
    void setTEzsignformfieldgroupTooltip(const QString &t_ezsignformfieldgroup_tooltip);
    bool is_t_ezsignformfieldgroup_tooltip_Set() const;
    bool is_t_ezsignformfieldgroup_tooltip_Valid() const;

    Field_eEzsignformfieldgroupTooltipposition getEEzsignformfieldgroupTooltipposition() const;
    void setEEzsignformfieldgroupTooltipposition(const Field_eEzsignformfieldgroupTooltipposition &e_ezsignformfieldgroup_tooltipposition);
    bool is_e_ezsignformfieldgroup_tooltipposition_Set() const;
    bool is_e_ezsignformfieldgroup_tooltipposition_Valid() const;

    Enum_Textvalidation getEEzsignformfieldgroupTextvalidation() const;
    void setEEzsignformfieldgroupTextvalidation(const Enum_Textvalidation &e_ezsignformfieldgroup_textvalidation);
    bool is_e_ezsignformfieldgroup_textvalidation_Set() const;
    bool is_e_ezsignformfieldgroup_textvalidation_Valid() const;

    QList<Ezsignformfieldgroupsigner_RequestCompound> getAObjEzsignformfieldgroupsigner() const;
    void setAObjEzsignformfieldgroupsigner(const QList<Ezsignformfieldgroupsigner_RequestCompound> &a_obj_ezsignformfieldgroupsigner);
    bool is_a_obj_ezsignformfieldgroupsigner_Set() const;
    bool is_a_obj_ezsignformfieldgroupsigner_Valid() const;

    QList<Custom_DropdownElement_RequestCompound> getAObjDropdownElement() const;
    void setAObjDropdownElement(const QList<Custom_DropdownElement_RequestCompound> &a_obj_dropdown_element);
    bool is_a_obj_dropdown_element_Set() const;
    bool is_a_obj_dropdown_element_Valid() const;

    QList<Ezsignformfield_RequestCompound> getAObjEzsignformfield() const;
    void setAObjEzsignformfield(const QList<Ezsignformfield_RequestCompound> &a_obj_ezsignformfield);
    bool is_a_obj_ezsignformfield_Set() const;
    bool is_a_obj_ezsignformfield_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_ezsignformfieldgroup_id;
    bool m_pki_ezsignformfieldgroup_id_isSet;
    bool m_pki_ezsignformfieldgroup_id_isValid;

    qint32 m_fki_ezsigndocument_id;
    bool m_fki_ezsigndocument_id_isSet;
    bool m_fki_ezsigndocument_id_isValid;

    Field_eEzsignformfieldgroupType m_e_ezsignformfieldgroup_type;
    bool m_e_ezsignformfieldgroup_type_isSet;
    bool m_e_ezsignformfieldgroup_type_isValid;

    Field_eEzsignformfieldgroupSignerrequirement m_e_ezsignformfieldgroup_signerrequirement;
    bool m_e_ezsignformfieldgroup_signerrequirement_isSet;
    bool m_e_ezsignformfieldgroup_signerrequirement_isValid;

    QString m_s_ezsignformfieldgroup_label;
    bool m_s_ezsignformfieldgroup_label_isSet;
    bool m_s_ezsignformfieldgroup_label_isValid;

    qint32 m_i_ezsignformfieldgroup_step;
    bool m_i_ezsignformfieldgroup_step_isSet;
    bool m_i_ezsignformfieldgroup_step_isValid;

    QString m_s_ezsignformfieldgroup_defaultvalue;
    bool m_s_ezsignformfieldgroup_defaultvalue_isSet;
    bool m_s_ezsignformfieldgroup_defaultvalue_isValid;

    qint32 m_i_ezsignformfieldgroup_filledmin;
    bool m_i_ezsignformfieldgroup_filledmin_isSet;
    bool m_i_ezsignformfieldgroup_filledmin_isValid;

    qint32 m_i_ezsignformfieldgroup_filledmax;
    bool m_i_ezsignformfieldgroup_filledmax_isSet;
    bool m_i_ezsignformfieldgroup_filledmax_isValid;

    bool m_b_ezsignformfieldgroup_readonly;
    bool m_b_ezsignformfieldgroup_readonly_isSet;
    bool m_b_ezsignformfieldgroup_readonly_isValid;

    qint32 m_i_ezsignformfieldgroup_maxlength;
    bool m_i_ezsignformfieldgroup_maxlength_isSet;
    bool m_i_ezsignformfieldgroup_maxlength_isValid;

    bool m_b_ezsignformfieldgroup_encrypted;
    bool m_b_ezsignformfieldgroup_encrypted_isSet;
    bool m_b_ezsignformfieldgroup_encrypted_isValid;

    QString m_s_ezsignformfieldgroup_regexp;
    bool m_s_ezsignformfieldgroup_regexp_isSet;
    bool m_s_ezsignformfieldgroup_regexp_isValid;

    QString m_t_ezsignformfieldgroup_tooltip;
    bool m_t_ezsignformfieldgroup_tooltip_isSet;
    bool m_t_ezsignformfieldgroup_tooltip_isValid;

    Field_eEzsignformfieldgroupTooltipposition m_e_ezsignformfieldgroup_tooltipposition;
    bool m_e_ezsignformfieldgroup_tooltipposition_isSet;
    bool m_e_ezsignformfieldgroup_tooltipposition_isValid;

    Enum_Textvalidation m_e_ezsignformfieldgroup_textvalidation;
    bool m_e_ezsignformfieldgroup_textvalidation_isSet;
    bool m_e_ezsignformfieldgroup_textvalidation_isValid;

    QList<Ezsignformfieldgroupsigner_RequestCompound> m_a_obj_ezsignformfieldgroupsigner;
    bool m_a_obj_ezsignformfieldgroupsigner_isSet;
    bool m_a_obj_ezsignformfieldgroupsigner_isValid;

    QList<Custom_DropdownElement_RequestCompound> m_a_obj_dropdown_element;
    bool m_a_obj_dropdown_element_isSet;
    bool m_a_obj_dropdown_element_isValid;

    QList<Ezsignformfield_RequestCompound> m_a_obj_ezsignformfield;
    bool m_a_obj_ezsignformfield_isSet;
    bool m_a_obj_ezsignformfield_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsignformfieldgroup_RequestCompound)

#endif // Ezsignformfieldgroup_RequestCompound_H
