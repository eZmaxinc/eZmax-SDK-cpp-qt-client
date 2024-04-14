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
 * Ezsigntemplateelementdependency_Request.h
 *
 * An Ezsigntemplateelementdependency Object
 */

#ifndef Ezsigntemplateelementdependency_Request_H
#define Ezsigntemplateelementdependency_Request_H

#include <QJsonObject>

#include "Field_eEzsigntemplateelementdependencyOperator.h"
#include "Field_eEzsigntemplateelementdependencyValidation.h"
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Ezsigntemplateelementdependency_Request : public Object {
public:
    Ezsigntemplateelementdependency_Request();
    Ezsigntemplateelementdependency_Request(QString json);
    ~Ezsigntemplateelementdependency_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsigntemplateelementdependencyId() const;
    void setPkiEzsigntemplateelementdependencyId(const qint32 &pki_ezsigntemplateelementdependency_id);
    bool is_pki_ezsigntemplateelementdependency_id_Set() const;
    bool is_pki_ezsigntemplateelementdependency_id_Valid() const;

    qint32 getFkiEzsigntemplateformfieldIdValidation() const;
    void setFkiEzsigntemplateformfieldIdValidation(const qint32 &fki_ezsigntemplateformfield_id_validation);
    bool is_fki_ezsigntemplateformfield_id_validation_Set() const;
    bool is_fki_ezsigntemplateformfield_id_validation_Valid() const;

    qint32 getFkiEzsigntemplateformfieldgroupIdValidation() const;
    void setFkiEzsigntemplateformfieldgroupIdValidation(const qint32 &fki_ezsigntemplateformfieldgroup_id_validation);
    bool is_fki_ezsigntemplateformfieldgroup_id_validation_Set() const;
    bool is_fki_ezsigntemplateformfieldgroup_id_validation_Valid() const;

    QString getSEzsigntemplateelementdependencyEzsigntemplateformfieldgrouplabel() const;
    void setSEzsigntemplateelementdependencyEzsigntemplateformfieldgrouplabel(const QString &s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel);
    bool is_s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel_Set() const;
    bool is_s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel_Valid() const;

    QString getSEzsigntemplateelementdependencyEzsigntemplateformfieldlabel() const;
    void setSEzsigntemplateelementdependencyEzsigntemplateformfieldlabel(const QString &s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel);
    bool is_s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel_Set() const;
    bool is_s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel_Valid() const;

    Field_eEzsigntemplateelementdependencyValidation getEEzsigntemplateelementdependencyValidation() const;
    void setEEzsigntemplateelementdependencyValidation(const Field_eEzsigntemplateelementdependencyValidation &e_ezsigntemplateelementdependency_validation);
    bool is_e_ezsigntemplateelementdependency_validation_Set() const;
    bool is_e_ezsigntemplateelementdependency_validation_Valid() const;

    bool isBEzsigntemplateelementdependencySelected() const;
    void setBEzsigntemplateelementdependencySelected(const bool &b_ezsigntemplateelementdependency_selected);
    bool is_b_ezsigntemplateelementdependency_selected_Set() const;
    bool is_b_ezsigntemplateelementdependency_selected_Valid() const;

    Field_eEzsigntemplateelementdependencyOperator getEEzsigntemplateelementdependencyOperator() const;
    void setEEzsigntemplateelementdependencyOperator(const Field_eEzsigntemplateelementdependencyOperator &e_ezsigntemplateelementdependency_operator);
    bool is_e_ezsigntemplateelementdependency_operator_Set() const;
    bool is_e_ezsigntemplateelementdependency_operator_Valid() const;

    QString getSEzsigntemplateelementdependencyValue() const;
    void setSEzsigntemplateelementdependencyValue(const QString &s_ezsigntemplateelementdependency_value);
    bool is_s_ezsigntemplateelementdependency_value_Set() const;
    bool is_s_ezsigntemplateelementdependency_value_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_ezsigntemplateelementdependency_id;
    bool m_pki_ezsigntemplateelementdependency_id_isSet;
    bool m_pki_ezsigntemplateelementdependency_id_isValid;

    qint32 m_fki_ezsigntemplateformfield_id_validation;
    bool m_fki_ezsigntemplateformfield_id_validation_isSet;
    bool m_fki_ezsigntemplateformfield_id_validation_isValid;

    qint32 m_fki_ezsigntemplateformfieldgroup_id_validation;
    bool m_fki_ezsigntemplateformfieldgroup_id_validation_isSet;
    bool m_fki_ezsigntemplateformfieldgroup_id_validation_isValid;

    QString m_s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel;
    bool m_s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel_isSet;
    bool m_s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel_isValid;

    QString m_s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel;
    bool m_s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel_isSet;
    bool m_s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel_isValid;

    Field_eEzsigntemplateelementdependencyValidation m_e_ezsigntemplateelementdependency_validation;
    bool m_e_ezsigntemplateelementdependency_validation_isSet;
    bool m_e_ezsigntemplateelementdependency_validation_isValid;

    bool m_b_ezsigntemplateelementdependency_selected;
    bool m_b_ezsigntemplateelementdependency_selected_isSet;
    bool m_b_ezsigntemplateelementdependency_selected_isValid;

    Field_eEzsigntemplateelementdependencyOperator m_e_ezsigntemplateelementdependency_operator;
    bool m_e_ezsigntemplateelementdependency_operator_isSet;
    bool m_e_ezsigntemplateelementdependency_operator_isValid;

    QString m_s_ezsigntemplateelementdependency_value;
    bool m_s_ezsigntemplateelementdependency_value_isSet;
    bool m_s_ezsigntemplateelementdependency_value_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsigntemplateelementdependency_Request)

#endif // Ezsigntemplateelementdependency_Request_H
