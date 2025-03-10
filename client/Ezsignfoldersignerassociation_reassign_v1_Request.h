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
 * Ezsignfoldersignerassociation_reassign_v1_Request.h
 *
 * Request for POST /1/object/ezsignfoldersignerassociation/{pkiEzsignfoldersignerassociationID}/reassign
 */

#ifndef Ezsignfoldersignerassociation_reassign_v1_Request_H
#define Ezsignfoldersignerassociation_reassign_v1_Request_H

#include <QJsonObject>


#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Ezsignfoldersignerassociation_reassign_v1_Request : public Object {
public:
    Ezsignfoldersignerassociation_reassign_v1_Request();
    Ezsignfoldersignerassociation_reassign_v1_Request(QString json);
    ~Ezsignfoldersignerassociation_reassign_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getFkiEzsignfoldersignerassociationId() const;
    void setFkiEzsignfoldersignerassociationId(const qint32 &fki_ezsignfoldersignerassociation_id);
    bool is_fki_ezsignfoldersignerassociation_id_Set() const;
    bool is_fki_ezsignfoldersignerassociation_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_fki_ezsignfoldersignerassociation_id;
    bool m_fki_ezsignfoldersignerassociation_id_isSet;
    bool m_fki_ezsignfoldersignerassociation_id_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsignfoldersignerassociation_reassign_v1_Request)

#endif // Ezsignfoldersignerassociation_reassign_v1_Request_H
