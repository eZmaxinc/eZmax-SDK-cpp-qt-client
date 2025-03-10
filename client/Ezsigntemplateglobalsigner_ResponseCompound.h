/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Ezsigntemplateglobalsigner_ResponseCompound.h
 *
 * A Ezsigntemplateglobalsigner Object
 */

#ifndef Ezsigntemplateglobalsigner_ResponseCompound_H
#define Ezsigntemplateglobalsigner_ResponseCompound_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Ezsigntemplateglobalsigner_ResponseCompound : public Object {
public:
    Ezsigntemplateglobalsigner_ResponseCompound();
    Ezsigntemplateglobalsigner_ResponseCompound(QString json);
    ~Ezsigntemplateglobalsigner_ResponseCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsigntemplateglobalsignerId() const;
    void setPkiEzsigntemplateglobalsignerId(const qint32 &pki_ezsigntemplateglobalsigner_id);
    bool is_pki_ezsigntemplateglobalsigner_id_Set() const;
    bool is_pki_ezsigntemplateglobalsigner_id_Valid() const;

    qint32 getFkiEzsigntemplateglobalId() const;
    void setFkiEzsigntemplateglobalId(const qint32 &fki_ezsigntemplateglobal_id);
    bool is_fki_ezsigntemplateglobal_id_Set() const;
    bool is_fki_ezsigntemplateglobal_id_Valid() const;

    QString getSEzsigntemplateglobalsignerDescription() const;
    void setSEzsigntemplateglobalsignerDescription(const QString &s_ezsigntemplateglobalsigner_description);
    bool is_s_ezsigntemplateglobalsigner_description_Set() const;
    bool is_s_ezsigntemplateglobalsigner_description_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_ezsigntemplateglobalsigner_id;
    bool m_pki_ezsigntemplateglobalsigner_id_isSet;
    bool m_pki_ezsigntemplateglobalsigner_id_isValid;

    qint32 m_fki_ezsigntemplateglobal_id;
    bool m_fki_ezsigntemplateglobal_id_isSet;
    bool m_fki_ezsigntemplateglobal_id_isValid;

    QString m_s_ezsigntemplateglobalsigner_description;
    bool m_s_ezsigntemplateglobalsigner_description_isSet;
    bool m_s_ezsigntemplateglobalsigner_description_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsigntemplateglobalsigner_ResponseCompound)

#endif // Ezsigntemplateglobalsigner_ResponseCompound_H
