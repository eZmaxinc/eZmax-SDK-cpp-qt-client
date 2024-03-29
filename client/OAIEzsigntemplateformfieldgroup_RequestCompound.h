/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsigntemplateformfieldgroup_RequestCompound.h
 *
 * A Ezsigntemplateformfieldgroup Object and children
 */

#ifndef OAIEzsigntemplateformfieldgroup_RequestCompound_H
#define OAIEzsigntemplateformfieldgroup_RequestCompound_H

#include <QJsonObject>

#include "OAICustom_DropdownElement_RequestCompound.h"
#include "OAIEzsigntemplateformfield_RequestCompound.h"
#include "OAIEzsigntemplateformfieldgroupsigner_RequestCompound.h"
#include "OAIField_eEzsigntemplateformfieldgroupSignerrequirement.h"
#include "OAIField_eEzsigntemplateformfieldgroupTooltipposition.h"
#include "OAIField_eEzsigntemplateformfieldgroupType.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsigntemplateformfieldgroupsigner_RequestCompound;
class OAICustom_DropdownElement_RequestCompound;
class OAIEzsigntemplateformfield_RequestCompound;

class OAIEzsigntemplateformfieldgroup_RequestCompound : public OAIObject {
public:
    OAIEzsigntemplateformfieldgroup_RequestCompound();
    OAIEzsigntemplateformfieldgroup_RequestCompound(QString json);
    ~OAIEzsigntemplateformfieldgroup_RequestCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsigntemplateformfieldgroupId() const;
    void setPkiEzsigntemplateformfieldgroupId(const qint32 &pki_ezsigntemplateformfieldgroup_id);
    bool is_pki_ezsigntemplateformfieldgroup_id_Set() const;
    bool is_pki_ezsigntemplateformfieldgroup_id_Valid() const;

    qint32 getFkiEzsigntemplatedocumentId() const;
    void setFkiEzsigntemplatedocumentId(const qint32 &fki_ezsigntemplatedocument_id);
    bool is_fki_ezsigntemplatedocument_id_Set() const;
    bool is_fki_ezsigntemplatedocument_id_Valid() const;

    OAIField_eEzsigntemplateformfieldgroupType getEEzsigntemplateformfieldgroupType() const;
    void setEEzsigntemplateformfieldgroupType(const OAIField_eEzsigntemplateformfieldgroupType &e_ezsigntemplateformfieldgroup_type);
    bool is_e_ezsigntemplateformfieldgroup_type_Set() const;
    bool is_e_ezsigntemplateformfieldgroup_type_Valid() const;

    OAIField_eEzsigntemplateformfieldgroupSignerrequirement getEEzsigntemplateformfieldgroupSignerrequirement() const;
    void setEEzsigntemplateformfieldgroupSignerrequirement(const OAIField_eEzsigntemplateformfieldgroupSignerrequirement &e_ezsigntemplateformfieldgroup_signerrequirement);
    bool is_e_ezsigntemplateformfieldgroup_signerrequirement_Set() const;
    bool is_e_ezsigntemplateformfieldgroup_signerrequirement_Valid() const;

    QString getSEzsigntemplateformfieldgroupLabel() const;
    void setSEzsigntemplateformfieldgroupLabel(const QString &s_ezsigntemplateformfieldgroup_label);
    bool is_s_ezsigntemplateformfieldgroup_label_Set() const;
    bool is_s_ezsigntemplateformfieldgroup_label_Valid() const;

    qint32 getIEzsigntemplateformfieldgroupStep() const;
    void setIEzsigntemplateformfieldgroupStep(const qint32 &i_ezsigntemplateformfieldgroup_step);
    bool is_i_ezsigntemplateformfieldgroup_step_Set() const;
    bool is_i_ezsigntemplateformfieldgroup_step_Valid() const;

    QString getSEzsigntemplateformfieldgroupDefaultvalue() const;
    void setSEzsigntemplateformfieldgroupDefaultvalue(const QString &s_ezsigntemplateformfieldgroup_defaultvalue);
    bool is_s_ezsigntemplateformfieldgroup_defaultvalue_Set() const;
    bool is_s_ezsigntemplateformfieldgroup_defaultvalue_Valid() const;

    qint32 getIEzsigntemplateformfieldgroupFilledmin() const;
    void setIEzsigntemplateformfieldgroupFilledmin(const qint32 &i_ezsigntemplateformfieldgroup_filledmin);
    bool is_i_ezsigntemplateformfieldgroup_filledmin_Set() const;
    bool is_i_ezsigntemplateformfieldgroup_filledmin_Valid() const;

    qint32 getIEzsigntemplateformfieldgroupFilledmax() const;
    void setIEzsigntemplateformfieldgroupFilledmax(const qint32 &i_ezsigntemplateformfieldgroup_filledmax);
    bool is_i_ezsigntemplateformfieldgroup_filledmax_Set() const;
    bool is_i_ezsigntemplateformfieldgroup_filledmax_Valid() const;

    bool isBEzsigntemplateformfieldgroupReadonly() const;
    void setBEzsigntemplateformfieldgroupReadonly(const bool &b_ezsigntemplateformfieldgroup_readonly);
    bool is_b_ezsigntemplateformfieldgroup_readonly_Set() const;
    bool is_b_ezsigntemplateformfieldgroup_readonly_Valid() const;

    qint32 getIEzsigntemplateformfieldgroupMaxlength() const;
    void setIEzsigntemplateformfieldgroupMaxlength(const qint32 &i_ezsigntemplateformfieldgroup_maxlength);
    bool is_i_ezsigntemplateformfieldgroup_maxlength_Set() const;
    bool is_i_ezsigntemplateformfieldgroup_maxlength_Valid() const;

    bool isBEzsigntemplateformfieldgroupEncrypted() const;
    void setBEzsigntemplateformfieldgroupEncrypted(const bool &b_ezsigntemplateformfieldgroup_encrypted);
    bool is_b_ezsigntemplateformfieldgroup_encrypted_Set() const;
    bool is_b_ezsigntemplateformfieldgroup_encrypted_Valid() const;

    QString getSEzsigntemplateformfieldgroupRegexp() const;
    void setSEzsigntemplateformfieldgroupRegexp(const QString &s_ezsigntemplateformfieldgroup_regexp);
    bool is_s_ezsigntemplateformfieldgroup_regexp_Set() const;
    bool is_s_ezsigntemplateformfieldgroup_regexp_Valid() const;

    QString getTEzsigntemplateformfieldgroupTooltip() const;
    void setTEzsigntemplateformfieldgroupTooltip(const QString &t_ezsigntemplateformfieldgroup_tooltip);
    bool is_t_ezsigntemplateformfieldgroup_tooltip_Set() const;
    bool is_t_ezsigntemplateformfieldgroup_tooltip_Valid() const;

    OAIField_eEzsigntemplateformfieldgroupTooltipposition getEEzsigntemplateformfieldgroupTooltipposition() const;
    void setEEzsigntemplateformfieldgroupTooltipposition(const OAIField_eEzsigntemplateformfieldgroupTooltipposition &e_ezsigntemplateformfieldgroup_tooltipposition);
    bool is_e_ezsigntemplateformfieldgroup_tooltipposition_Set() const;
    bool is_e_ezsigntemplateformfieldgroup_tooltipposition_Valid() const;

    QList<OAIEzsigntemplateformfieldgroupsigner_RequestCompound> getAObjEzsigntemplateformfieldgroupsigner() const;
    void setAObjEzsigntemplateformfieldgroupsigner(const QList<OAIEzsigntemplateformfieldgroupsigner_RequestCompound> &a_obj_ezsigntemplateformfieldgroupsigner);
    bool is_a_obj_ezsigntemplateformfieldgroupsigner_Set() const;
    bool is_a_obj_ezsigntemplateformfieldgroupsigner_Valid() const;

    QList<OAICustom_DropdownElement_RequestCompound> getAObjDropdownElement() const;
    void setAObjDropdownElement(const QList<OAICustom_DropdownElement_RequestCompound> &a_obj_dropdown_element);
    bool is_a_obj_dropdown_element_Set() const;
    bool is_a_obj_dropdown_element_Valid() const;

    QList<OAIEzsigntemplateformfield_RequestCompound> getAObjEzsigntemplateformfield() const;
    void setAObjEzsigntemplateformfield(const QList<OAIEzsigntemplateformfield_RequestCompound> &a_obj_ezsigntemplateformfield);
    bool is_a_obj_ezsigntemplateformfield_Set() const;
    bool is_a_obj_ezsigntemplateformfield_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 pki_ezsigntemplateformfieldgroup_id;
    bool m_pki_ezsigntemplateformfieldgroup_id_isSet;
    bool m_pki_ezsigntemplateformfieldgroup_id_isValid;

    qint32 fki_ezsigntemplatedocument_id;
    bool m_fki_ezsigntemplatedocument_id_isSet;
    bool m_fki_ezsigntemplatedocument_id_isValid;

    OAIField_eEzsigntemplateformfieldgroupType e_ezsigntemplateformfieldgroup_type;
    bool m_e_ezsigntemplateformfieldgroup_type_isSet;
    bool m_e_ezsigntemplateformfieldgroup_type_isValid;

    OAIField_eEzsigntemplateformfieldgroupSignerrequirement e_ezsigntemplateformfieldgroup_signerrequirement;
    bool m_e_ezsigntemplateformfieldgroup_signerrequirement_isSet;
    bool m_e_ezsigntemplateformfieldgroup_signerrequirement_isValid;

    QString s_ezsigntemplateformfieldgroup_label;
    bool m_s_ezsigntemplateformfieldgroup_label_isSet;
    bool m_s_ezsigntemplateformfieldgroup_label_isValid;

    qint32 i_ezsigntemplateformfieldgroup_step;
    bool m_i_ezsigntemplateformfieldgroup_step_isSet;
    bool m_i_ezsigntemplateformfieldgroup_step_isValid;

    QString s_ezsigntemplateformfieldgroup_defaultvalue;
    bool m_s_ezsigntemplateformfieldgroup_defaultvalue_isSet;
    bool m_s_ezsigntemplateformfieldgroup_defaultvalue_isValid;

    qint32 i_ezsigntemplateformfieldgroup_filledmin;
    bool m_i_ezsigntemplateformfieldgroup_filledmin_isSet;
    bool m_i_ezsigntemplateformfieldgroup_filledmin_isValid;

    qint32 i_ezsigntemplateformfieldgroup_filledmax;
    bool m_i_ezsigntemplateformfieldgroup_filledmax_isSet;
    bool m_i_ezsigntemplateformfieldgroup_filledmax_isValid;

    bool b_ezsigntemplateformfieldgroup_readonly;
    bool m_b_ezsigntemplateformfieldgroup_readonly_isSet;
    bool m_b_ezsigntemplateformfieldgroup_readonly_isValid;

    qint32 i_ezsigntemplateformfieldgroup_maxlength;
    bool m_i_ezsigntemplateformfieldgroup_maxlength_isSet;
    bool m_i_ezsigntemplateformfieldgroup_maxlength_isValid;

    bool b_ezsigntemplateformfieldgroup_encrypted;
    bool m_b_ezsigntemplateformfieldgroup_encrypted_isSet;
    bool m_b_ezsigntemplateformfieldgroup_encrypted_isValid;

    QString s_ezsigntemplateformfieldgroup_regexp;
    bool m_s_ezsigntemplateformfieldgroup_regexp_isSet;
    bool m_s_ezsigntemplateformfieldgroup_regexp_isValid;

    QString t_ezsigntemplateformfieldgroup_tooltip;
    bool m_t_ezsigntemplateformfieldgroup_tooltip_isSet;
    bool m_t_ezsigntemplateformfieldgroup_tooltip_isValid;

    OAIField_eEzsigntemplateformfieldgroupTooltipposition e_ezsigntemplateformfieldgroup_tooltipposition;
    bool m_e_ezsigntemplateformfieldgroup_tooltipposition_isSet;
    bool m_e_ezsigntemplateformfieldgroup_tooltipposition_isValid;

    QList<OAIEzsigntemplateformfieldgroupsigner_RequestCompound> a_obj_ezsigntemplateformfieldgroupsigner;
    bool m_a_obj_ezsigntemplateformfieldgroupsigner_isSet;
    bool m_a_obj_ezsigntemplateformfieldgroupsigner_isValid;

    QList<OAICustom_DropdownElement_RequestCompound> a_obj_dropdown_element;
    bool m_a_obj_dropdown_element_isSet;
    bool m_a_obj_dropdown_element_isValid;

    QList<OAIEzsigntemplateformfield_RequestCompound> a_obj_ezsigntemplateformfield;
    bool m_a_obj_ezsigntemplateformfield_isSet;
    bool m_a_obj_ezsigntemplateformfield_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigntemplateformfieldgroup_RequestCompound)

#endif // OAIEzsigntemplateformfieldgroup_RequestCompound_H
