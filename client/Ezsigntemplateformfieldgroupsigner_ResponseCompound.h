/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.0
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Ezsigntemplateformfieldgroupsigner_ResponseCompound.h
 *
 * An Ezsigntemplateformfieldgroupsigner Object and children
 */

#ifndef Ezsigntemplateformfieldgroupsigner_ResponseCompound_H
#define Ezsigntemplateformfieldgroupsigner_ResponseCompound_H

#include <QJsonObject>


#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Ezsigntemplateformfieldgroupsigner_ResponseCompound : public Object {
public:
    Ezsigntemplateformfieldgroupsigner_ResponseCompound();
    Ezsigntemplateformfieldgroupsigner_ResponseCompound(QString json);
    ~Ezsigntemplateformfieldgroupsigner_ResponseCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsigntemplateformfieldgroupsignerId() const;
    void setPkiEzsigntemplateformfieldgroupsignerId(const qint32 &pki_ezsigntemplateformfieldgroupsigner_id);
    bool is_pki_ezsigntemplateformfieldgroupsigner_id_Set() const;
    bool is_pki_ezsigntemplateformfieldgroupsigner_id_Valid() const;

    qint32 getFkiEzsigntemplatesignerId() const;
    void setFkiEzsigntemplatesignerId(const qint32 &fki_ezsigntemplatesigner_id);
    bool is_fki_ezsigntemplatesigner_id_Set() const;
    bool is_fki_ezsigntemplatesigner_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_ezsigntemplateformfieldgroupsigner_id;
    bool m_pki_ezsigntemplateformfieldgroupsigner_id_isSet;
    bool m_pki_ezsigntemplateformfieldgroupsigner_id_isValid;

    qint32 m_fki_ezsigntemplatesigner_id;
    bool m_fki_ezsigntemplatesigner_id_isSet;
    bool m_fki_ezsigntemplatesigner_id_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsigntemplateformfieldgroupsigner_ResponseCompound)

#endif // Ezsigntemplateformfieldgroupsigner_ResponseCompound_H
