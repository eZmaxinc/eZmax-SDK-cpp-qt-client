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
 * Apikey_getList_v1_Response_mPayload.h
 *
 * Payload for GET /1/object/apikey/getList
 */

#ifndef Apikey_getList_v1_Response_mPayload_H
#define Apikey_getList_v1_Response_mPayload_H

#include <QJsonObject>

#include "Apikey_ListElement.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Apikey_ListElement;

class Apikey_getList_v1_Response_mPayload : public Object {
public:
    Apikey_getList_v1_Response_mPayload();
    Apikey_getList_v1_Response_mPayload(QString json);
    ~Apikey_getList_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getIRowReturned() const;
    void setIRowReturned(const qint32 &i_row_returned);
    bool is_i_row_returned_Set() const;
    bool is_i_row_returned_Valid() const;

    qint32 getIRowFiltered() const;
    void setIRowFiltered(const qint32 &i_row_filtered);
    bool is_i_row_filtered_Set() const;
    bool is_i_row_filtered_Valid() const;

    QList<Apikey_ListElement> getAObjApikey() const;
    void setAObjApikey(const QList<Apikey_ListElement> &a_obj_apikey);
    bool is_a_obj_apikey_Set() const;
    bool is_a_obj_apikey_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_i_row_returned;
    bool m_i_row_returned_isSet;
    bool m_i_row_returned_isValid;

    qint32 m_i_row_filtered;
    bool m_i_row_filtered_isSet;
    bool m_i_row_filtered_isValid;

    QList<Apikey_ListElement> m_a_obj_apikey;
    bool m_a_obj_apikey_isSet;
    bool m_a_obj_apikey_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Apikey_getList_v1_Response_mPayload)

#endif // Apikey_getList_v1_Response_mPayload_H
