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
 * Ezsignformfieldgroupsigner_ResponseCompound.h
 *
 * An Ezsignformfieldgroupsigner Object and children to create a complete structure
 */

#ifndef Ezsignformfieldgroupsigner_ResponseCompound_H
#define Ezsignformfieldgroupsigner_ResponseCompound_H

#include <QJsonObject>


#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Ezsignformfieldgroupsigner_ResponseCompound : public Object {
public:
    Ezsignformfieldgroupsigner_ResponseCompound();
    Ezsignformfieldgroupsigner_ResponseCompound(QString json);
    ~Ezsignformfieldgroupsigner_ResponseCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsignformfieldgroupsignerId() const;
    void setPkiEzsignformfieldgroupsignerId(const qint32 &pki_ezsignformfieldgroupsigner_id);
    bool is_pki_ezsignformfieldgroupsigner_id_Set() const;
    bool is_pki_ezsignformfieldgroupsigner_id_Valid() const;

    qint32 getFkiEzsignfoldersignerassociationId() const;
    void setFkiEzsignfoldersignerassociationId(const qint32 &fki_ezsignfoldersignerassociation_id);
    bool is_fki_ezsignfoldersignerassociation_id_Set() const;
    bool is_fki_ezsignfoldersignerassociation_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_ezsignformfieldgroupsigner_id;
    bool m_pki_ezsignformfieldgroupsigner_id_isSet;
    bool m_pki_ezsignformfieldgroupsigner_id_isValid;

    qint32 m_fki_ezsignfoldersignerassociation_id;
    bool m_fki_ezsignfoldersignerassociation_id_isSet;
    bool m_fki_ezsignfoldersignerassociation_id_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsignformfieldgroupsigner_ResponseCompound)

#endif // Ezsignformfieldgroupsigner_ResponseCompound_H
